#include <function.h>

int qwe(std::string s1, std::string s2){
    int result=0;
    int k,n;

    if (s1.length() >= s2.length()){
        for (int i=0; i < s1.length(); i++){
            k=0;
            n=i;
            if (result > (s1.length()-i)) break;
            if ((s1.length()-i) >= s2.length()){
                for (int j=0; j < s2.length(); j++){
                    if (s1[n] == s2[j]) k++;
                    n++;
                }
            }else{
                for (int j=0; j<(s1.length()-i); j++){
                    if (s1[n] == s2[j]) k++;
                    n++;
                }
            }
            if (result < k) result = k;

        }
    }

    if (s2.length() > s1.length()){
        for (int i=0; i < s2.length(); i++){
            k=0;
            n=i;
            if (result > (s2.length()-i)) break;
            if ((s2.length()-i) >= s1.length()){
                for (int j=0; j < s1.length(); j++){
                    if (s2[n] == s1[j]) k++;
                    n++;
                }
            }else{
                for (int j=0; j<(s2.length()-i); j++){
                    if (s2[n] == s1[j]) k++;
                    n++;
                }
            }
            if (result < k) result = k;

        }
    }

    return result;
}

double asd(int k, std::string s1, std::string s2){
    double result=0.0;

    result=(double)k/((s1.length()+s2.length())/2);

    return result;
}

double asdf(std::string s, std::vector<std::string> arr){
    double result=0.0, aver_summ=0.0;
    int k=0, summ_l=0;

    for (int i=0; i < arr.size(); i++){
        if (k < qwe(s,arr[i])){
            k=qwe(s,arr[i]);
        }
        summ_l =+ arr[i].length();
    }
    aver_summ=(double)summ_l/arr.size();
    result = (double)k/aver_summ;

    return result;
}
