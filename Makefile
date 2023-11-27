CXX = g++


SOURCES = Chat.cpp HmapImplementation.cpp ChatManager.cpp Message.cpp User.cpp
HEADERS = Hmap.hpp Chat.hpp Message.hpp User.hpp ChatManager.hpp
TARGET = LinkedList

$(TARGET): $(SOURCES) $(HEADERS)
	$(CXX) $(SOURCES) -o $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET)
	
.PHONY: run
run: $(TARGET)
	./$(TARGET)