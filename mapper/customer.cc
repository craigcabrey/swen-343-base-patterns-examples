class Customer {
 public: 
  Customer(int id) : _id(id) {}
  inline int id() { return _id; }
  inline void set_id(int id) { _id = id; } 

 private:
  int _id; 
};