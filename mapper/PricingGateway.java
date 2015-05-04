// Wraps API calls
public class PricingGateway {
  ComplexPricingStrategy strategy = new ComplexPricingStrategy();

  public int getAirlinePrice(String source_city, String dest_city) {
    System.out.println("Getting airline price.");
    return strategy.calculateAirlinePricing(source_city, dest_city);
  }

  public int getHousingPrice(String home_location) {
    System.out.println("Getting property valuation.");
    return strategy.calculateProprtyValuation(home_location);
  }

  public int getOilPrice(String oil_location) {
   System.out.println("Getting oil market rate.");
   return strategy.calculateOilValuation(oil_location);
  }
}
