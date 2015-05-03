CC = clang
CFLAGS  = -lstdc++

# typing 'make' will invoke the first target entry in the file 
# (in this case the default target entry)
# you can name this target entry anything, but "default" or "all"
# are the most commonly used names by convention
#
default: gateway_driver

# To create the executable file count we need the object files
# customer.o, lease.o, and asset.o:
gateway_driver: customer.o lease.o asset.o pricing_gateway.o gateway_driver.o
	$(CC) $(CFLAGS) -o gateway_driver customer.o lease.o asset.o pricing_gateway.o gateway_driver.o

# To create the object file customer.o, we need the source file customer.cc
customer.o: customer.cc
	$(CC) $(CFLAGS) -c customer.cc

# To create the object file lease.o, we need the source file lease.cc
lease.o:  lease.cc 
	$(CC) $(CFLAGS) -c lease.cc

# To create the object file asset.o, we need the source file asset.cc 
asset.o:  asset.cc
	$(CC) $(CFLAGS) -c asset.cc

# To create the object file asset.o, we need the source file pricing_gateway.cc 
pricing_gateway.o: pricing_gateway.cc
	$(CC) $(CFLAGS) -c pricing_gateway.cc	

# To create the object file asset.o, we need the source file pricing_gateway.cc 
gateway_driver.o: gateway_driver.cc
	$(CC) $(CFLAGS) -c gateway_driver.cc		

# To start over from scratch, type 'make clean'.  This
# removes the executable file, as well as old .o object files.
clean: 
	$(RM) gateway_driver *.o