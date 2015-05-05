public class AirlineCustomer extends Customer {
  private String source_city;
  private String destination_city;

  public AirlineCustomer(String name, int id, String source_city, String destination_city) {
    super(name, id);
    this.source_city = source_city;
    this.destination_city = destination_city;
  }

  // Accesses complex logic through a Gateway
  public int getAirlinePrice() {
    PricingGateway gateway = new PricingGateway();
    return gateway.getAirlinePrice(this.source_city, this.destination_city);
  }
}
