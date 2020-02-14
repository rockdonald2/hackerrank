

class Message {
private:
    string msg;
    int cur_id;
    static int index;

public: 
    Message() {}

    Message(const string& m) : msg(m) {
        cur_id = ++index;
    }

    const string& get_text() {
        return msg;
    }

    friend bool operator<(const Message &m1, const Message &m2) {
        return m1.cur_id < m2.cur_id;
    }
};

int Message::index = 0; 

class MessageFactory {
public:
    MessageFactory() {}
    Message create_message(const string& text) {
        return Message(text);
    }
};

