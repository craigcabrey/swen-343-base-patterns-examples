class Asset {
 public:
  Asset(int value) : _value(value) {}
  inline int value() { return _value; }
  inline void set_value(int value) { _value = value; }

 private:
  int _value;
};