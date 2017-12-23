.PHONY: clean All

All:
	@echo "----------Building project:[ CppPrimes - Debug ]----------"
	@cd "CppPrimes" && "$(MAKE)" -f  "CppPrimes.mk"
clean:
	@echo "----------Cleaning project:[ CppPrimes - Debug ]----------"
	@cd "CppPrimes" && "$(MAKE)" -f  "CppPrimes.mk" clean
