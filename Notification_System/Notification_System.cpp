// Notification_System.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

class INotifiable
{
public:
    virtual void sendNotification(const std::string& message) = 0;
    virtual std::string getType() const = 0;
};

class EmailNotifier : public INotifiable
{
public:
    void sendNotification(const std::string& message)
    {
        std::cout << "[EMAIL]: " << message << std::endl;
    }

    std::string getType() const
    {
        return "EMAIL";
    }
};

class SMSNotifier : public INotifiable
{
public:
    void sendNotification(const std::string& message)
    {
        std::cout << "[SMS]: " << message << std::endl;
    }

    std::string getType() const
    {
        return "SMS";
    }
};

class NotificationManager
{
private:
    std::vector<INotifiable*> inotify;
public:
    void addNotifier(INotifiable* notifier)
    {
        inotify.push_back(notifier);
    }

    void broadCast(const std::string& message)
    {
        std::cout << "Broadcast" << std::endl;
        for (size_t i = 0; i < inotify.size();i++)
        {
            inotify[i]->sendNotification(message);
        }
    }

    void sendToType(const std::string& type, const std::string& message)
    {
        std::cout << "Send To Type " << type << std::endl;
        for (size_t i = 0; i < inotify.size(); i++)
        {
            if (inotify[i]->getType() == type)
            {
                inotify[i]->sendNotification(message);
            }
        }
        
    }
};

void fileLogger(const std::string message)
{
    std::ofstream out;
    out.open("log.txt");
    if (out.is_open())
    {
        out << message << std::endl;
    }
    out.close();
    std::cout << "Log file has been written" << std::endl;
}

int main()
{
    SMSNotifier sms;
    EmailNotifier mail;
    NotificationManager n_man;
    n_man.addNotifier(&sms);
    n_man.addNotifier(&mail);
    n_man.broadCast("Hello World!");
    n_man.sendToType("SMS", "Hello friend");
    fileLogger("hello");

    std::cin.get();
}


