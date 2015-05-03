#include <iostream>

#include "pricing_gateway.cc"

int main() {
  std::cout << "Starting Gateway example." << std::endl << std::endl;
  PricingGateway* pricing_gateway = new PricingGateway();

  // Customer
  std::cout << "Creating customer with an ID of 1." << std::endl;
  pricing_gateway->Create_Customer(1);

  std::cout << "Customer info: ";
  std::cout << pricing_gateway->Get_Customer_Info() << std::endl;

  std::cout << "Updating customer ID to 2" << std::endl;
  pricing_gateway->Update_Customer(2);  

  std::cout << "Customer info: ";
  std::cout << pricing_gateway->Get_Customer_Info() << std::endl;

  // Break line
  std::cout << std::endl;  

  // Lease
  std::cout << "Creating lease with a price of $200." << std::endl;
  pricing_gateway->Create_Lease(200);

  std::cout << "Lease info: ";
  std::cout << pricing_gateway->Get_Lease_Info() << std::endl;

  std::cout << "Updating lease price to $500" << std::endl;
  pricing_gateway->Update_Lease(500);  

  std::cout << "Lease info: ";
  std::cout << pricing_gateway->Get_Lease_Info() << std::endl;

  // Break line
  std::cout << std::endl;

  // Asset
  std::cout << "Creating asset of $100,000." << std::endl;
  pricing_gateway->Create_Asset(100000);

  std::cout << "Asset info: ";
  std::cout << pricing_gateway->Get_Asset_Info() << std::endl;

  std::cout << "Updating asset to $369" << std::endl;
  pricing_gateway->Update_Asset(369);  

  std::cout << "Asset info: ";
  std::cout << pricing_gateway->Get_Asset_Info() << std::endl;
}