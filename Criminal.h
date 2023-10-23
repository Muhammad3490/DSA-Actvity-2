#include <iostream>
using namespace std;

class Criminal
{
public:
    Criminal();
    ~Criminal();

    // Getters and Setters
    string getGender();
    void setGender(string gender);

    string getCNIC();
    void setCNIC(string cnic);

    string getState();
    void setState(string state);

    string getCity();
    void setCity(string city);

    string getPostalCode();
    void setPostalCode(string postalCode);

    string getAddress();
    void setAddress(string address);

    string getDOB();
    void setDOB(string dob);

    string getCrimeType();
    void setCrimeType(string crimeType);

    string getPunishmentYears();
    void setPunishmentYears(string punishmentYears);

    string getCrimeDate();
    void setCrimeDate(string crimeDate);

    string getComplainerName();
    void setComplainerName(string complainerName);

    string getInvestigatorOfficer();
    void setInvestigatorOfficer(string InvestigatorOfficer);

    string getPunishmentDate();
    void setPunishmentDate(string punishmnetDate);

   string getCell();
    void setCell(string cell); 

    string getName();
    void setName(string name);

    string getAge();
    void setAge(string age);

    void printInfo();

private:
    string name;
    string age;
	string gender;
	string cnic;
	string state;
	string city;
	string postalCode;
	string address;
	string dob;
	string crimeType;
	string punishmentYears;
	string crimeDate;
	string complainerName;
	string InvestigatorOfficer;
	string punishmnetDate;
	string cell;

};

Criminal::Criminal()
{
}

Criminal::~Criminal()
{
}
