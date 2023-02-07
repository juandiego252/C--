class clase
{
    // Atributos
private:
    int x, y;
    // Meotodos
public:
    clase(int _x, int _y)
    { // Constructor
        x = _x;
        y = _y;
    }
    clase()
    {
        x = y = 0;
    }

    void setX(int valor);
};