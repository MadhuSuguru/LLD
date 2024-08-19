#include<iostream>

using namespace std;

class XMLData{
    string xml;
    public :
        XMLData(string pxml){
            xml=pxml; 
        }
        string getXMLData(){
            return xml;
        }
};  

class DataAnalyserTool{
    string jsonData;

    public:
        DataAnalyserTool() {}
        DataAnalyserTool(string pJsonData){
            jsonData = pJsonData;
        }
        virtual void analyseData(){

            cout<<"Data Analyser Tool Analysing Data\n";
        }

};

class Adapter : public DataAnalyserTool{
    XMLData* xmlData;

    public:
        Adapter(XMLData* pXML){
            xmlData = pXML;
        }
        void analyseData()override{
            cout<<"convert xml data to json data "<< xmlData->getXMLData()<<endl;
            // convert xml to json
            cout<<"Converted data";
        }
};

class Client{
    public:
        void ProcessData(DataAnalyserTool* tool){
            tool->analyseData();
        }
};

int main()
{
    XMLData* xmlData = new XMLData("xmldata");
    DataAnalyserTool* tool = new Adapter(xmlData);

    Client* client = new Client();
    client->ProcessData(tool);
    return 0;
}