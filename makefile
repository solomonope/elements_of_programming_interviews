build_count_bits:
	@g++ count_bits.cpp -o count_bits

count_bits: build_count_bits
	@echo "Running Count Bit"
	@./count_bits
