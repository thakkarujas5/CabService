class Driver {

        int driver_id;
        string driver_name;
        Cab c;
        Display d;

    public: 

        // To be used by the Cab Service class to show the driver of an incoming ride
        void display (Location currLocation, Location destLocation) {

            d.currLocation = currLocation;
            d.destLocation = destLocation;
        }

        void AcceptOrRejectRide(bool status) {

            c.isAvailable = status;
        }
        void setStatus();
}

class Rider {


        int rider_id;
        string rider_name;
        Location currLocation;
        Location destLocation;
        vector<History> h;

        void setcurrLocation();
        void setDestLocation();
        void pushToHistory();
}

class Display {

    Location currLocation;
    Location destLocation;

}

class Cab {

    string cab_plate_number;
    Driver d;
    Rider r;
    bool isAvailable;

    Driver getDriver();

    void setDriver(Driver d);

    bool getStatus();

    setRider(Rider r);

    removeRider();
}

class CabService {

    vector<Cab> cs;
    vector<Rider> riders;

   
   Rider registerRider(string name);

   Cab registerDriver(string driver_name,string cab_plate_number);

   void findCab(Rider r, Location currLocation, Location destLocation);

}

class Location {

        int x;
        int y;

        double distanceTo(Location otherLocation);
}

class History {

    Rider r;
    Driver d;
    Location start;
    Location end;
}
