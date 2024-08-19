#include<iostream>
#include<list>
#include<string>
using namespace std;
class ISubscriber{
    public:
        virtual void notify(string msg) = 0;
};

class User : public ISubscriber{
    private:
        int userID;
    public:
        User(int ID){
            this->userID = ID;
        }
        void notify(string s){
            cout<<"User "<<userID<<" "<<s<<endl;
        }

};

class Group{
    private:
        list<ISubscriber*> userList;
    public:
        void subscribe(ISubscriber* user){
            userList.push_back(user);
        };
        void unsubscribe(ISubscriber* user){
            userList.remove(user);
        }
        void notify(string s){
            for(auto user:userList){
                user->notify(s);
            }
        }
};

int main(){

    Group* group = new Group;
    User* user1 = new User(1);
    User* user2 = new User(2);
    User* user3 = new User(3);

    group->subscribe(user1);
    group->subscribe(user2);
    group->subscribe(user3);

    group->notify("Message!!!");

    group->unsubscribe(user1);

    group->notify("Message after unsubscribing user"); 



    return 0;
} 