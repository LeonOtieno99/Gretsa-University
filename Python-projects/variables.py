cars = 100
space_in_a_car = 4.0
drivers = 30
passengers = 90
Cars_not_driven = cars - drivers
Cars_driven = drivers
Carpool_capacity = Cars_driven * space_in_a_car
average_passengers_in_a_car = passengers / Cars_driven

print("There are", cars, "cars available.")
print("There are only", drivers, "drivers available.")
print("There will be",Cars_not_driven, "empty cars today.")
print("We can transport", Carpool_capacity,"people today.")
print("We have", passengers, "to carpool today")
print("We need to put about", average_passengers_in_a_car, "in each car.")
