#include <iostream>

#include <IMC/Spec/PlanSpecification.hpp>
#include <IMC/Spec/PlanManeuver.hpp>
#include <IMC/Spec/Loiter.hpp>
#include <IMC/Spec/SetEntityParameters.hpp>
#include <IMC/Spec/EntityParameter.hpp>

#include <IMC/Base/ByteBuffer.hpp>
#include <IMC/Base/Packet.hpp>
#include <UDP/DatagramSocket.h>
#define LAUVXPLORE1 (30)
using namespace IMC;


int main() {
    char localhost[] = "127.0.0.1";
    PlanManeuver planmaneuver;
    PlanSpecification planspecification;
    Loiter loiter;
    SetEntityParameters setentityparameters;
    
    
    EntityParameter entityparameter;
    entityparameter.name = "Active";
    entityparameter.value = "false";
    
    
    setentityparameters.name = "LBL";
    setentityparameters.params.push_back(entityparameter);
    
    loiter.timeout = 10000;
    loiter.lat = 0.7188016469344056;
    loiter.lon = -0.15194250254286037;
    loiter.z = 3;
    loiter.z_units = 1;
    loiter.speed = 300;
    loiter.speed_units = 1;
    loiter.type = 1;
    loiter.radius = 20;
    loiter.length = 1;
    loiter.bearing = 0;
    loiter.direction = 1;
    
    planmaneuver.maneuver_id = "1";
    planmaneuver.data.set(loiter);
    planmaneuver.start_actions.push_back(setentityparameters);
    
    planspecification.setTimeStamp();       // set timestamp to current time                       
    planspecification.setDestination(LAUVXPLORE1);   // specify destination (otherwise DUNE will reject it)'
    planspecification.setSource(16652);
    planspecification.setSourceEntity(44);
    planspecification.plan_id = "cmd-lauv-xplore-1";
    planspecification.start_man_id = "1";
    planspecification.maneuvers.push_back(planmaneuver);
    
    
    int size = planspecification.getSerializationSize();    // calculate bytes required for serialization
    char buffer[size];                          // allocate same number of bytes

    Packet::serialize(&planspecification, (uint8_t *) buffer, size);    // serialize message
    DatagramSocket socket(6002, localhost, true, true);     // see https://github.com/butcherg/DatagramSocket
    socket.sendTo(buffer, size, localhost);                 // send message to 127.0.0.1:6002
    planspecification.toJSON(std::cout);
}
