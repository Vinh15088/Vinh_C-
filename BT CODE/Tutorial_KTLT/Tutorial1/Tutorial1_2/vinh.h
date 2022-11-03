double celsius_of(int fahr){
    return (static_cast<double>(5)/9) * (fahr - 32);
}

double absolute_value_of(int fahr){
    return ((static_cast<double>(5)/9) * (fahr - 32)) + 273.15;
}
