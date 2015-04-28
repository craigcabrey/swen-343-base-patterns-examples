class RecordSet < Hash
    def initialize
        super
        self['rows'] = Array.new
        self['rows'][0] = 'John Doe'
        self['rows'][1] = 'Betty White'
        self['rows'][2] = 'John Stamos Sucks'
    end
end

r = RecordSet.new

# Print out fake rows
r.each{|key|
    key.each{|row|
        puts row
    }
}
