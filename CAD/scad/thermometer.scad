difference(){
    difference(){
    cube([180,70,20]);
         translate([5,5,5]) cube([170,60,15]);
    }
    
    translate([0,15,6]) cube([5,13,7]);
}


difference(){
    difference(){
    translate([0,80,0]) cube([180,70,5]);
        translate([100,115,0]) cube([73,27,5]);
    }
    translate([165,95,0]) cylinder(h=10, r1=5, r2= 5);
}
