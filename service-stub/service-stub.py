#!/usr/bin/env python2
DEVELOPMENT = True

class TaxInterface:
    def getTaxInfo(self, data):
        pass

class TaxServiceStub(TaxInterface):
    def getTaxInfo(self, data):
        return data*0.05

def main():
    print "Welcome to tax calculator"
    if DEVELOPMENT:
        tax_service = TaxServiceStub()
        print "Loading stub tax service"
    else:
        # load real service
        tax_service = None
        print "Loading real tax service"

    print "Tax on 100 is " + str(tax_service.getTaxInfo(100))

main()
