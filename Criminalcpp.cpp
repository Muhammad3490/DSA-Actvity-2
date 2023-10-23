#include "Criminal.h"

Criminal::Criminal() {
    gender = "";
    cnic = "";
    state = "";
    city = "";
    postalCode = "";
    address = "";
    dob = "";
    crimeType = "";
    punishmentYears = "";
    crimeDate = "";
    complainerName = "";
    InvestigatorOfficer = "";
    punishmnetDate = "";
    cell = "";
}

Criminal::~Criminal()
{
}
string Criminal::getGender() {
    return gender;
}

void Criminal::setGender(string gender) {
    this->gender = gender;
}


string Criminal::getCNIC() {
    return cnic;
}

void Criminal::setCNIC(string cnic) {
    this->cnic = cnic;
}

string Criminal::getState() {
    return state;
}

void Criminal::setState(string state) {
    this->state = state;
}


string Criminal::getCity() {
    return city;
}

void Criminal::setCity(string city) {
    this->city = city;
}


string Criminal::getPostalCode() {
    return postalCode;
}

void Criminal::setPostalCode(string postalCode) {
    this->postalCode = postalCode;
}


string Criminal::getAddress() {
    return address;
}

void Criminal::setAddress(string address) {
    this->address = address;
}


string Criminal::getDOB() {
    return dob;
}

void Criminal::setDOB(string dob) {
    this->dob = dob;
}

// Getter and Setter for "crimeType"
string Criminal::getCrimeType() {
    return crimeType;
}

void Criminal::setCrimeType(string crimeType) {
    this->crimeType = crimeType;
}

// Getter and Setter for "punishmentYears"
string Criminal::getPunishmentYears() {
    return punishmentYears;
}

void Criminal::setPunishmentYears(string punishmentYears) {
    this->punishmentYears = punishmentYears;
}

// Getter and Setter for "crimeDate"
string Criminal::getCrimeDate() {
    return crimeDate;
}

void Criminal::setCrimeDate(string crimeDate) {
    this->crimeDate = crimeDate;
}

// Getter and Setter for "complainerName"
string Criminal::getComplainerName() {
    return complainerName;
}

void Criminal::setComplainerName(string complainerName) {
    this->complainerName = complainerName;
}

// Getter and Setter for "InvestigatorOfficer"
string Criminal::getInvestigatorOfficer() {
    return InvestigatorOfficer;
}

void Criminal::setInvestigatorOfficer(string InvestigatorOfficer) {
    this->InvestigatorOfficer = InvestigatorOfficer;
}

// Getter and Setter for "punishmentDate"
string Criminal::getPunishmentDate() {
    return punishmnetDate;
}

void Criminal::setPunishmentDate(string punishmnetDate) {
    this->punishmnetDate = punishmnetDate;
}

string Criminal::getName() {
    return name;
}
void Criminal::setName(string name) {
    this->name=name;
}
string Criminal::getAge() {
    return age;
}
void Criminal::setAge(string age) {
    this->age=age;
}

string getAge();
void setAge(string age);
// Getter and Setter for "cell"
string Criminal::getCell() {
    return cell;
}

void Criminal::setCell(string cell) {
    this->cell = cell;
}

void Criminal::printInfo() {
    cout << "Name :" << name << endl;
    cout << "Age :" << age << endl;
    cout << "Gender :" << gender << endl;
    cout << "CNIC : " << cnic << endl;
    cout << "State :" << state << endl;
    cout << "Postal Code :" << postalCode << endl;
    cout << "Address : " << address << endl;
    cout << "Crime type :" << crimeType << endl;
    cout << "Crime date :" << crimeDate << endl;
    cout << "Complainer :" << complainerName << endl;
    cout <<"Investigator officer : " << InvestigatorOfficer << endl;
    cout << "Punisment date :" << punishmnetDate << endl;
    cout << "Cell number : " << cell << endl;

}