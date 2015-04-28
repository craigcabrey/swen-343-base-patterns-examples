class RecordSet < Hash
    def initialize
        super
        self['rows'] = Array.new
        self['rows'][0] = 'John Doe'
        self['rows'][1] = 'Betty White'
        self['rows'][2] = 'John Stamos Sucks'
        self['rows'][3] = 'John Stamos Really Sucks'
        self['rows'][4] = 'John Stamos Sucks A lot'
        self['rows'][5] = 'John Stamos Is Terrible'
        self['rows'][6] = 'John Stamos Could be better'
        self['rows'][7] = 'John Stamos Isnt the worst'
        self['rows'][8] = 'John Stamos Definitely isnt the best'
        self['rows'][9] = 'John Stamos Worse than most'
        self['rows'][10] = 'John Stamos Not good at his job'
        self['rows'][11] = 'John Stamos Is subpar in his field'
    end
end

r = RecordSet.new

# Print out fake rows
r.each{|key|
    key.each{|row|
        puts row
    }
}
