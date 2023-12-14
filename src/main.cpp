#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main() {
    /*ifstream dictionaryFile("your_dict_file.txt");
    if(!dictionaryFile.is_open()){
        cout << "Error opening the file" << endl;
        return 1;
    }*/
    Edge *edge = new Edge;
    EdgeList *edgeList = new EdgeList();
    edgeList->insert(new Edge());
    string *arr = new string[10];
    arr->append("mom");
    arr->append("dom");
    arr->append("dam");
    arr->append("dad");
    arr->append("pons");
    arr->append("tons");
    arr->append("tony");
    string *arr_three = new string[4];
    string *arr_four = new string[3];
    string *arr_five = new string[3];
    for (int i = 0; i < arr->length(); i++) {
        if (arr[i].length() == 3) {
            arr_three->append(arr[i]);
        } else if (arr[i].length() == 4) {
            arr_four->append(arr[i]);
        }
    }

    return 0;
}
