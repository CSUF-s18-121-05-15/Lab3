//Anthony Bressan    

//9/3/2017    

//Lab 2    

#include <iostream>    

#include <string>   
#include <fstream>

using namespace std;    

int main()    

{    
        ofstream myfile;
        char choice = 'z';    
        int width = 0;    
        int height = 0;    
        string word;   
        int word_choice;   
        int j;  
        bool pointingUp; 
        bool fileoutput;
        int length = word.length();
        bool repeat = 1;
    while (repeat == true)
    {
        cout << "(A)Rectangle or (B)triangle?";    
        cin >> choice;    
        cout << "Would you like to use a word? Yes(1) No(2)" << endl;   
        cin >> word_choice;  
        cout << "Would you like to output to file? Yes(1) No(0)" << endl;
        cin >> fileoutput;
        
        // Output square using only * and not outputting to a file
            if (choice == 'a' && word_choice == 2 && fileoutput == false)    
            {    
                cout << "Enter Width ";    
                cin >> width; 
                cout << "Enter height ";    
                cin >> height;    
                for (int i = 0; i < height; i++ )    
                {    
                    for (int j = 0; j  < width; j++)    
                    {    
                        cout << "* ";    
                    }    
                    cout << endl;    
                }   
            }    
        
        // Output square using word without outputting to a file
            if (choice == 'a' && word_choice == 1 && fileoutput == false)    
            {    
                cout << "Enter Word ";    
                cin >> word;    
                cout << "Enter height ";    
                cin >> height;    
                for (int i = 0; i < height; i++ )    
                {    
                    cout << word << endl;    
                }    
            }   
        
        // Output a triangle using * without outputting to a file pointing up
            if (choice == 'b' && word_choice == 2 && fileoutput == false)  
            {  
                cout << "Enter height" << endl;   
                cin >> height;  
                cout << "Would you like the triangle to point up? Yes(1) No(0)";  
                cin >> pointingUp;  
                if (pointingUp == true)  
                {  
                    for (int i = 0; i < height; i++)  
                    {   
                        for (int j = 0; j <= i; j++)   
                        {   
                            cout << "* ";  
                        }  
                    cout << endl;      
                    } 
                }
            
            
        // Output a triangle using * without outputting to a file pointing down
            else if (pointingUp ==false)
                {  
                    for (int i = 0; i <= height; i++)   
                    {   
                        for (int j = height; j > i; j--)   
                        {   
                            cout << "* ";  
                        }  
                        cout << endl;      
                    } 
                }  
            }
        
        // Output a triangle using a word without outputting to a file pointing down
            if (choice == 'b' && word_choice == 1 && fileoutput == false)  
            {  
                cout << "Enter word" << endl;   
                cin >> word;  
                int length = word.length();
                cout << "Would you like the triangle to point up? Yes(1) No(0)";  
                cin >> pointingUp;  
                if (pointingUp == false)  
                {  
                    for (int i = length; i >= 0; i--) 
                    {
                        for (int j = 0; j < i; j++) 
                        {
                        cout << word[j];
                        }
                        cout << endl;
                    }  
                }
            
        // Output a triangle using a word without outputting to a file pointing up
                else if (pointingUp == true)
                {  
                    for (int i = 0; i <= length; i++) 
                    {
                        for (int j = 0; j < i; j++) 
                        {
                            cout << word[j];
                        }
                        cout << endl;
                    }  
                    cout << endl;
                }
            }  
        
        //Output a triangle using * outputting to a file pointing up
            if (choice == 'b' && word_choice == 2 && fileoutput == true)  
            {  
                myfile.open ("myshape.txt");
                cout << "Enter height" << endl;   
                cin >> height;  
                cout << "Would you like the triangle to point up? Yes(1) No(0)";  
                cin >> pointingUp;  
                if (pointingUp == true)  
                {  
                    for (int i = 0; i < height; i++)  
                    {   
                        for (int j = 0; j <= i; j++)   
                        {   
                            myfile << "* ";  
                        }  
                    myfile << endl;      
                    }   
                } 
            
        // Output a triangle using * outputting to a file pointing down
                else if (pointingUp ==false)
                {  
                    myfile.open ("myshape.txt");
                    for (int i = 0; i <= height; i++)   
                    {   
                        for (int j = height; j > i; j--)   
                        {   
                        myfile << "* ";  
                        }  
                    myfile << endl;      
                    }
                }
            }  
         
        
        // Output a triangle using a word outputting to a file pointing down
            if (choice == 'b' && word_choice == 1 && fileoutput == true)  
            {  
                myfile.open ("myshape.txt");
                cout << "Enter word" << endl;   
                cin >> word;  
                int length = word.length();
                cout << "Would you like the triangle to point up? Yes(1) No(0)";  
                cin >> pointingUp;  
                if (pointingUp == false)  
                {  
                    myfile.open ("myshape.txt");
                    for (int i = length; i >= 0; i--) 
                    {
                        for (int j = 0; j < i; j++) 
                        {
                            myfile << word[j];
                        }
                        myfile << endl;
                    }
               
                    myfile.close();
                }
            
        // Outputting a triangle using a word Outputting to a file pointing up
                else if (pointingUp == true)
                {  
                    myfile.open ("myshape.txt");
                    for (int i = 0; i <= length; i++) 
                    {
                        for (int j = 0; j < i; j++) 
                        {
                            myfile << word[j];
                        }
                        myfile << endl;
                    }  
                    myfile << endl;      
                    myfile.close();
                }
            } 
        
        
        
        
                // Output square using only * and outputting to a file
            if (choice == 'a' && word_choice == 2 && fileoutput == true)    
            {    
                myfile.open ("myshape.txt");
                cout << "Enter Width ";    
                cin >> width; 
                cout << "Enter height ";    
                cin >> height;    
                for (int i = 0; i < height; i++ )    
                {    
                    for (int j = 0; j  < width; j++)    
                    {    
                        cout << "* ";    
                    }    
                    cout << endl;    
                } 
                myfile.close(); 
            }    
        
        // Output square using word outputting to a file
            if (choice == 'a' && word_choice == 1 && fileoutput == true)    
            {   
                myfile.open ("myshape.txt");
                cout << "Enter Word ";    
                cin >> word;    
                cout << "Enter height ";    
                cin >> height;    
                for (int i = 0; i < height; i++ )    
                {    
                    cout << word << endl;    
                }    
                myfile.close(); 
            }
        
        cout << "Would you like to run again?" << endl;
        cin >> repeat;
    }
        return 0;    
}    