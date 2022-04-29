//
// Created by yana on 29.04.2022.
//
#include <bubblesort.h>
void bubblesort (std::vector <int> gum){
    for (int i=0; i<gum.size(); i++){
        for(int j=0; j<gum.size(); j++){
            int a;
            if(gum[i]>gum[j]){
                a=gum[i];
                gum[i]=gum[j];
                gum[j]=a;
            }
        }
    }
}
