// #Problem 25

int ReadAge ( )
{
    int Age;
    cout << "Please Enter your age?" << endl;
    cin >> Age;
    
    return Age;
}

bool validateNumberInRange (int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

int ReadUntilAgeBetween(int From, int To)
{
    int Age = 0;
    do {
        
        Age = ReadAge();
    } while (!validateNumberInRange(Age, 18, 45));
        
             return Age;
}

void PrintResult(int Age)
{
        cout << "Your Age is " << Age << endl ;
}


int main() {

 PrintResult(ReadUntilAgeBetween(18, 45));
     
    return EXIT_SUCCESS;
}
