class Lease {
 public:
 	Lease(int lease_id): _lease(lease_id) {}
 	inline int lease() { return _lease; }
 	void set_lease(int lease_id) { _lease = lease_id; } 

 private:
 	int _lease;
};
