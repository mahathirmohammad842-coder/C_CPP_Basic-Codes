#include<iostream>
using namespace std;

class Configuration{
public:
    int _settingA=10;
    double _settingB = 5.5;


void printconfig()
{
    cout<<"Setting A: "<<_settingA<<endl;
    cout<<"Setting B: "<<_settingB<<endl;
}

};

class Logger {
protected:
    int _logCount = 0;

public:
    void recordLog(string message) {
        _logCount++;
        cout << "[Log #" << _logCount << "] " << message << endl;
    }
};

class AppManager : public Configuration, public Logger {
public:
    void initialize() {
        printconfig();
        recordLog("Starting application");
        recordLog("Loading user settings");
    }

    int getLogCount()
    {
        return _logCount;
    }
};


int main() {

    AppManager app;


    cout<<"--- Initial Configuration --- "<<endl;
    app.initialize();

    cout << "Total logs : " << app.getLogCount() << endl;
    cout<<"--- Updated Configuration --- "<<endl;
    app._settingA =20;
    app.printconfig();

return 0;
}
