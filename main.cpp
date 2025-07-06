#include <iostream>
#include "pthread.h"
#include <thread>
#include <string>
#include <string.h>

using namespace std;


int sxolia=0;
string mynmb;
int t_time=0;
int begin_with=0;

int main(int argc,char** argv)
{
    cout<<"enter begin with 0 or 1 ,";
    cout<<"enter ur number , ";
    cout<<"enter sxolia 0 i 1 , ";
    cout<<"time pause , ";
    cout<<"voyeristic behaviours enjoy ur stay\n";
    mynmb.clear();
    begin_with=stoi(argv[1]);
    mynmb=argv[2];
    sxolia=stoi(argv[3]);
    t_time=stoi(argv[4]);
    cout<<"ur number: " << mynmb << " with size: " << mynmb.size()-1 <<"\n";
    int myn[mynmb.size()+1];
    int advmyn=0;int tmpint=0;char l;int nnine=0;
    for(int i=0;i<=mynmb.size()-1;i++){
        l=mynmb.at(i);
        tmpint=stoi(&l);
        if(tmpint<=9){myn[advmyn]=tmpint; advmyn+=1;}
        if(tmpint>9){cout<<"ur number is bigger than 9 \n";nnine=1;}
    }

    int ctone_lp=0;
    int cttwo_lp=0;
    int ct=0;
    int ext=0;

    int metavl_one=0;
    int metavl_two=0;

    int xone=0;int xtwo=0;
    int ox[100];int tx[100];
   int fspace=0;
   for(;;){
   fspace=0;
       cout<<"\n";
       for(int i=begin_with;i<=9;i++){
            cout<<"\n";
          // if(sxolia==1){cout<<"entering with ct " << ct << " and @i " << i <<"\n";}
            while(ct<=mynmb.size()-1){
              //if(sxolia==1){cout<<"checking @i " << i << " with @ value " << myn[ct] <<" --> ";}
              if(i<=myn[ct] ){
                ctone_lp+=1;
                if(sxolia==1){
                cout<<i << " < ";
                cout<<  myn[ct]  << " +=1 :=: " << ctone_lp <<" | ";}
                metavl_one+=1;
              }
              if(i>myn[ct]  ){
                cttwo_lp+=1;
                if(sxolia==1){
                cout<<i << " > " ;
                cout<< myn[ct] << " +=1 :=: " <<  cttwo_lp <<" || ";}
                metavl_two+=1;
              }
              ct+=1;
              fspace+=1;
              if(fspace%2==0){cout<<"\n";}
              if(ct==mynmb.size()){
                  //cout<<"\n";
                  cout<<"@i: " << i << " number | " << metavl_one   << " and  number / " << metavl_two<<"\n";
                  ox[xone]=metavl_one; xone+=1;
                  tx[xtwo]=metavl_two; xtwo+=1;
                  //if(sxolia==1){cout<<"i am breaking\n";}
                  metavl_one=0;metavl_two=0;
                  ct=0;
                  break;
                 }
              //std::this_thread::sleep_for(std::chrono::milliseconds(t_time));
            }
       }
        if(sxolia==1){cout<<"external counter " << ext << " --> ";}
        ext+=1;
        if(sxolia==1){cout<<"increased to value: " << ext <<"\n";}
        cout<<"smaller: " << ctone_lp << " bigger: " << cttwo_lp <<"\n";
        ct=0;
        std::this_thread::sleep_for(std::chrono::milliseconds(t_time));
        if(ext==1){break;}
    }

    cout<<"\n";
    cout<<"ctone_lp | : " << ctone_lp <<" --> ";
    for(int i=0;i<=xone-1;i++){cout<<ox[i] <<" " ;}
    cout<<"\n";

    cout<<"cttwo_lp / : " << cttwo_lp <<" --> ";
    for(int i=0;i<=xtwo-1;i++){cout<<tx[i]<<" " ;}

    cout<<"\n";
    cout<<nnine<<"\n";

    return 0;
}
