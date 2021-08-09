#include <iostream>
#include <list>
using namespace std;





class YoutubeChannel{

private:

    string Name;
    string OwnerName;
    int subscribersCount;
    list<string> publishedVideos;


public:
    YoutubeChannel(string name, string ownername){

        Name = name;
        OwnerName = ownername;
        subscribersCount = 0;
        }

    void GetInfo(){


    cout << "Name: " << Name << endl;
    cout << "Owner: " << OwnerName << endl;
    cout << "Subscribers: " << subscribersCount << endl;
    cout << "Videos: ";
    for (string video : publishedVideos){
        cout << video << endl;
    }

    }

    void subscribe(){

        subscribersCount++;

    }

    void unsubscribe(){
        if (subscribersCount > 0){
            subscribersCount--;
            }
        }

    void uploadVideo(string title){
    publishedVideos.push_back(title);

    }
};



int main(){

    YoutubeChannel ytchannel1("RandomChannel", "John");

    ytchannel1.subscribe();
    ytchannel1.subscribe();
    ytchannel1.subscribe();
    ytchannel1.unsubscribe();
    ytchannel1.uploadVideo("Teste_video");

    ytchannel1.GetInfo();



}


