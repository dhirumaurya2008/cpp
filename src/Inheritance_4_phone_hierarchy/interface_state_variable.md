- Landline Phone
    - call: By dial/keyboard
    - Answer 

class LandLineNumber {
    PhoneNumber number_;
    Name subscriber_;
    Ringtone rTone_;

    public:
    LandlinePhone(const char* num, const char *subs);

    void Call(const PhoneNumber *p);
    void Answer();
    /*Purpose of this function is to be able to print object state for debugging*/
    friend ostream& operator<<(ostream &os, const LandLinePhone& p);
};


- Mobile Phone 
    - Call: By keyboard -
        shows number 
        - By Number
        - By Name
    - Answer
    - Redial
    - Set Ring Tone
    - Add Contact
        - Number
        - Name

class MobilePhone {
    PhoneNumber number_;
    Name subscriber_;
    RingTone rTone_;
    AddressBook aBook_;
    PhoneNumber *lastDial_;
    void SetLastDialed(const PhoneNumber& p);
    void ShowNumber();

    public:
     MobilePhone(const char *num, const char *subs);

     void Call(PhoneNumber *p);
     void Call(const Name& n);
     void Answer();
     void Redial();
     void SetRingTone(Ring::RINGTONE r);
     void AddContact(const char *number = 0, const char *subs = 0);
     friend ostream& operator<<(ostream &os, const MobilePhone& p);
};


- Smart Phone 
    - Call: By touchscreen -
        shows number & photo
        - By Number
        - By Name
    - Answer
    - Redial
    - Set Ring tone 
    - Add Contact
        - Number
        - Name
        - Photo
    class SmartPhone {
    PhoneNumber number_;
    Name subscriber_;
    RingTone rTone_;
    AddressBook aBook_;
    PhoneNumber *lastDial_;
    void SetLastDialed(const PhoneNumber& p);
    void ShowNumber();
    unsigned int size_;
    void DisplayPhoto();

    public:
     SmartPhone(const char *num, const char *subs);

     void Call(PhoneNumber *p);
     void Call(const Name& n);
     void Answer();
     void Redial();
     void SetRingTone(Ring::RINGTONE r);
     void AddContact(const char *number = 0, const char *subs = 0);
     friend ostream& operator<<(ostream &os, const SmartPhone& p);
    };