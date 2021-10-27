#ifndef WORKSHOPRECORD_H
#define WORKSHOPRECORD_H
#include<iostream>
#include<string>

const std::string service_types[3] = {"tyreChange", "yearlyService", "configupgrade"};

enum enumService{tyreChange, yearlyService, configupgrade};
enum enumParts{fanBelt, airFilter, Muffler};
const std::string payment_types[3] = {"Cash", "Card", "Swish"};
enum payment_method_enum {Cash, Card, Swish};

typedef struct struct_part
{
    enumParts parts;
    float price;
}part_struct;
typedef struct struct_payment{
    payment_method_enum payment_type;
    float amount = -1;
} payment_struct;

class Person
{
protected:
    std::string name;
    std::string personalNumber;
    std::string phoneNumber;
public:
    Person() = delete;
    Person(const std::string &name, const std::string &personalNumber, const std::string &phoneNumber);

  
};

class Servicerecord
{
private:    

    std::string customer_ID;
    std::string dateVisted;
    std::string orderNumber;
    public:
    enumService services;
    enumParts parts;
    Servicerecord() = delete;
    Servicerecord(Person customer1,std::string dateVisted, enumService service);

    void changePart(std::string part_name, float part_price);
    void pay(payment_method_enum payment, float amount);
    void printRecordData();
    float totPartPrice();

};

#endif  //"WORKSHOPRECORD_H"