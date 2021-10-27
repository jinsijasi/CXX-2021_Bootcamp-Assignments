#include "workshopRecord.h"

   Person::Person(const std::string &name, const std::string &personalNumber, const std::string &phoneNumber)
    {
        this-> name = name;
        this-> personalNumber = personalNumber;
        this-> phoneNumber = phoneNumber;
        

    }

    Servicerecord::Servicerecord(Person customer1,std::string dateVisted, enumService service):customer_name(_name), date(_date), service(_service) {};
              