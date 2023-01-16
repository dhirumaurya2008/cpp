class Phone {
virtual void Call(const PhoneNumber* p) = 0;
virtual void Answer() = 0;
virtual void Redial() = 0;
};
class MobilePhone: public LandlinePhone {
    //PhoneNumber number_;
    //Name subscriber_;
    //RingTone rTone_;
    AddressBook aBook_;
    PhoneNumber *lastDial_;
    void SetLastDialed(const PhoneNumber& p);
    void ShowNumber();

    public:
     MobilePhone(const char *num, const char *subs);

     void Call(PhoneNumber *p); // Override
     void Call(const Name& n); //Overlaod 
     //void Answer();      //Inherited 
     void Redial();
     void SetRingTone(Ring::RINGTONE r);
     void AddContact(const char *number = 0, const char *subs = 0);
     friend ostream& operator<<(ostream &os, const MobilePhone& p);
};

    class SmartPhone: public MobilePhone {
    //PhoneNumber number_;
   // Name subscriber_;
    //RingTone rTone_;
    //AddressBook aBook_;
    //PhoneNumber *lastDial_;
    //void SetLastDialed(const PhoneNumber& p);
    //void ShowNumber();
    unsigned int size_;
    void DisplayPhoto();

    public:
     SmartPhone(const char *num, const char *subs): MobilePhone(num, subs), lastDial_(0);
  

     void Call(PhoneNumber *p);
     void Call(const Name& n);
     //void Answer();
     void Redial();
     //void SetRingTone(Ring::RINGTONE r);
     //void AddContact(const char *number = 0, const char *subs = 0);
     friend ostream& operator<<(ostream &os, const SmartPhone& p);
    };