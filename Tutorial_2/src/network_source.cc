#include <omnetpp.h>

using namespace omnetpp;

class My_Node : public cSimpleModule {

protected:

 virtual void initialize() override;
 virtual void handleMessage(cMessage *msg) override;
};

Define_Module(My_Node); // Register the class with OMNeT++

void My_Node::initialize() {

 const char *myName = getName();
 if (strcmp(myName, "Computer_1") == 0) {
 cMessage *msg = new cMessage("Hey , Can I get your index number?");
 send(msg, "output_gate");

 }
}


void My_Node::handleMessage(cMessage *msg) {

 const char *name = getName();
 if (strcmp(name, "Computer_2") == 0) {
 std::string replyMessage = "Hello , 205025A";
 cMessage *msg = new cMessage(replyMessage.c_str());
 send(msg, "output_gate");
 }
 else if (strcmp(name, "Computer_3") == 0) {
 std::string replyMessage = "What is your name?";
 cMessage *msg = new cMessage(replyMessage.c_str());
 send(msg, "output_gate");
 }
 else if (strcmp(name, "Computer_4") == 0) {
 std::string replyMessage = "My name is Kasuni";
 cMessage *msg = new cMessage(replyMessage.c_str());
 send(msg, "output_gate");
 }
 else if (strcmp(name, "Computer_5") == 0) {
 std::string replyMessage = "Nice to meet you";
 cMessage *msg = new cMessage(replyMessage.c_str());
 send(msg, "output_gate");
 }

 delete msg;
}



