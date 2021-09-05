# include <iostream>
using namespace std;

class Phone {
  long long int phoneNo = 9011177377;
  string phoneName = "Harshal_Patil";

  public:
  void call(){
    cout << "Dialing " << phoneNo << endl;
  }

  long long int getPhoneNo (){
    return phoneNo;
  }

  void setPhoneNo ( long long int number){
    phoneNo = number;
  }

  string getPhoneName (){
    return phoneName;
  }

  void setPhoneName (string name){
    phoneName = name;
  }
};

int main(){
  Phone oneContact;
  oneContact.call();
  cout << "This is " << oneContact.getPhoneName() << " & Number is: " << oneContact.getPhoneNo() << endl;

  oneContact.setPhoneNo(9146552627);
  oneContact.setPhoneName("Rahul_Pawar");
  oneContact.call();
  cout << "This is " << oneContact.getPhoneName() << " & Number is: " << oneContact.getPhoneNo() << endl; 


  return 0;
}
