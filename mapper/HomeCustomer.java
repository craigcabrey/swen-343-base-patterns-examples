public class HomeCustomer extends Customer {
	private String home_location;

	HomeCustomer(String name, int id, String home_location) {
		super(name, id);
		this.home_location = home_location;
	}

	public int getHomePrice() {
		PricingGateway gateway = new PricingGateway();
    return gateway.getHousingPrice(home_location);
  }
}


