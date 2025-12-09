
import statistics
# Read state names
states = input("Enter state names separated by commas: ").split(',')
# Read population values
population = list(map(int, input("Enter population values separated by spaces: ").split()))
# Read murder rate values
murder_rates = list(map(float, input("Enter murder rate values separated by spaces:").split()))
# Compute statistical measures
mean_population = statistics.mean(population)
median_population = statistics.median(population)
variance_population = statistics.variance(population)
# Display results
print(f"\nMean Population: {mean_population:.2f}")
print(f"Median Population: {median_population:.2f}")
print(f"Variance of Population: {variance_population:.2f}")