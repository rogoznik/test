#include <iostream>
#include <cstdlib>
#include <vector>
#include <function.h>
#include <fstream>

using namespace std;

int main()
{

    const float p=0.5;

    typedef vector<string> myvector;

    ifstream fin;

    vector<myvector> arr;
    vector<string> arr_s, arr_s_temp;
    string s,fs;
    int k=0;

    fin.open("test.txt");

    while (!fin.eof()){
        fin >> fs;
        arr_s.push_back(fs);
    }

    fin.close();


// ////////////////////////////////////////////////////////////

    for (int z=0; z<arr_s.size(); z++){
        s=arr_s[z];
        for (int i=z+1; i<arr_s.size(); i++){
            k=qwe(s,arr_s[i]);
            if (asd(k,s,arr_s[i])>p){
                arr_s_temp.push_back(s);
                arr_s_temp.push_back(arr_s[i]);
                arr.push_back(arr_s_temp);
                arr_s.erase(arr_s.begin()+i);
                arr_s.erase(arr_s.begin()+z);
                z=-1;
                arr_s_temp.clear();
                break;
            }
        }

    }

    bool push=false;
    while (arr_s.size()>0){
        for(int z=0; z<arr_s.size(); z++){
            s=arr_s[z];
            for(int i=0; i<arr.size(); i++){
                if(asdf(s,arr[i])>p){
                    arr[i].push_back(s);
                    push=true;
                    break;
                }
            }
            if (push){
                arr_s.erase(arr_s.begin()+z);
                push=false;
            }else{
                for (int i=z+1; i<arr_s.size(); i++){
                    k=qwe(s,arr_s[z]);
                    if(asd(k,s,arr_s[z])>p){
                        arr_s_temp.clear();
                        arr_s_temp.push_back(s);
                        arr_s_temp.push_back(arr_s[z]);
                        arr.push_back(arr_s_temp);
                        arr_s.erase(arr_s.begin()+i);
                        arr_s.erase(arr_s.begin()+z);
                        break;
                    }
                }
            }
        }
    }

    for(int i=0; i<arr.size(); i++){
        for (int j=0; j<arr[i].size(); j++){
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }


    cout << endl;
    system("pause");
    return 0;
}

