#ifndef PRODUCT_H
#define PRODUCT_H

namespace product
{
    class Product
    {
    public:
        Product(std::string name,std::string desc,int quantity,double price);
        std::string getName();
        std::string getDescription();
        double getPrice();
        int getQuantity();
        void setQuantity(int quantity);

        
        


    private:
        std::string _name;
        std::string _description;
        double _price;
        int _quantity;
    };
    std::ostream& operator<<(std::ostream& os, const Product& product);
}

#endif // PRODUCT_H
