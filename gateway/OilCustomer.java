public class OilCustomer extends Customer {
	private String oil_location;

	OilCustomer(String name, int id, String oil_location) {
		super(name, id);
		this.oil_location = oil_location;
	}

	public int getOilPrice() {
		PricingGateway gateway = new PricingGateway();
    return gateway.getOilPrice(this.oil_location);
  }
}