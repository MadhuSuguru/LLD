#include<iostream>

using namespace std;



class IButton{
    public:
        virtual void ClickButton() = 0;
};

class ITextBox{
    public:
        virtual void ShowText() = 0;
};
class IFactory{
    public:
        virtual IButton* CreateButton() = 0;
        virtual ITextBox* CreateTextBox() = 0;
};
class WinButton : public IButton{
    public:
        void ClickButton(){
            cout<<"Windows button Clicked\n";
        }
};

class WinTextBox : public ITextBox{
    public:
        void ShowText(){
            cout<<"Windows Text is shown\n";
        }
};
class MacButton : public IButton{
    public:
        void ClickButton(){
            cout<<"Mac button Clicked\n";
        }
};

class MacTextBox : public ITextBox{
    public:
        void ShowText(){
            cout<<"Mac Text is shown\n";
        }
};

class WinFactory : public IFactory{
    public:
        IButton* CreateButton(){
            return new WinButton();
        }
        ITextBox* CreateTextBox(){
            return new WinTextBox();
        }
};


class MacFactory : public IFactory{
     public:
        IButton* CreateButton(){
            return new MacButton();
        }
        ITextBox* CreateTextBox(){
            return new MacTextBox();
        }
};

class GUIFactory{

    public:
        static IFactory* CreateFactory(string os){
            if(os == "Win"){
                return new WinFactory();
            }
            else if (os == "Mac"){
                return new MacFactory();
            }
            return new MacFactory();
        }
};

int main(){

    string osType="Mac";
    cout<<"Enter OS type\n";
    cin>>osType;
    IFactory* factory = GUIFactory::CreateFactory(osType);

    IButton* button = factory->CreateButton();

    button->ClickButton();
     
    ITextBox* textBox = factory->CreateTextBox();

    textBox->ShowText();

    return 0;
}