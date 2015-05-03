#include "customer.cc"
#include "asset.cc"
#include "lease.cc"

class PricingGateway {
 public:
 	void Create_Customer(int customer_id) {
 		this->_customer = new Customer(customer_id);
 	}
 	void Create_Asset(int asset_value) {
 		this->_asset = new Asset(asset_value);
 	}
 	void Create_Lease(int lease_id) {
 		this->_lease = new Lease(lease_id);
 	}

  void Update_Customer(int id) {
  	this->_customer->set_id(id);
  }
  void Update_Asset(int asset_value) {
  	this->_asset->set_value(asset_value);
  }
  void Update_Lease(int lease_value) {
  	this->_lease->set_lease(lease_value);
  }

  int Get_Customer_Info() {
  	return this->_customer->id();
  }
  int Get_Asset_Info() {
  	return this->_asset->value();
  }
  int Get_Lease_Info() {
  	return this->_lease->lease();
  }  

 private:
 	Customer* _customer;
 	Asset* _asset;
 	Lease* _lease;
};