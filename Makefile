CXX = g++


SOURCES = chat.cpp HmapImplementation.cpp ChatManager.cpp 
HEADERS = Hmap.hpp 
TARGET = LinkedList

$(TARGET): $(SOURCES) $(HEADERS)
	$(CXX) $(SOURCES) -o $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET)
	
.PHONY: run
run: $(TARGET)
	./$(TARGET)