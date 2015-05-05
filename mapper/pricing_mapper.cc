#include "customer.cc"
#include "asset.cc"
#include "lease.cc"
#include "pricing_strategy.cc"

class PricingMapper {
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

  // Get external code
  void Get_Prices() {
    this->_strategy = new PricingStrategy();
    this->_airlinePrice = this->_strategy->calculateAirlinePricing("SFO", "ROC");
    this->_housingPrice = this->_strategy->calculatePropertyValuation("Washington");
    this->_oilPrice = this->_strategy->calculateOilValuation("Rochester");
  }

  void Update_Listeners() {
    this->_customer->set_id(this->_airlinePrice);
    this->_asset->set_value(this->_oilPrice);
    this->_lease->set_lease(this->_housingPrice);
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
  PricingStrategy* _strategy;

  int _airlinePrice;
  int _housingPrice;
  int _oilPrice;
};