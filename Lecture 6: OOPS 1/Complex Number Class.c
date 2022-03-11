class ComplexNumbers {
    int real;
    int imaginary;
    
    public :
    ComplexNumbers(int real, int imaginary) {
        this -> real = real;
        this -> imaginary = imaginary;
    }
    
    void plus(ComplexNumbers c) {
        int real = this -> real + c.real;
        int imaginary = this -> imaginary + c.imaginary;
        this -> real = real;
        this -> imaginary = imaginary;
    }
    
    void multiply(ComplexNumbers c) {
        int real = (this -> real * c.real) - (this -> imaginary * c.imaginary);
        int imaginary = (this -> real * c.imaginary) + (this -> imaginary * c.real);
        this -> real = real;
        this -> imaginary = imaginary;
    }
    
    void print() {
        cout << this -> real << " + " << "i" << this -> imaginary << endl;
    }
};
