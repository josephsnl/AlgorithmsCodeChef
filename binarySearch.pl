#! /usr/bin/perl

sub insertionSort{
    my @array = @_;
    my $temp;
    for(my $i = 1; $i<scalar(@array); $i++){
        my $d = $i;
        while($d>0 && $array[$d]<$array[$d-1]){
            $temp = $array[$d];
            $array[$d] = $array[$d-1];
            $array[$d-1] = $temp;
            $d--;
        }
    }
    
    return @array;
}

print "Enter the number of elements";
$num = <STDIN>;

print "Enter the list of nums:\n";
my @array;

for(my $i=0; $i<$num; $i++){
    $array[$i]= <STDIN>;
} 
@sortedArray = insertionSort(@array);
print "New: @sortedArray";
