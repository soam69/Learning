from flask import Flask,redirect,url_for

app = Flask(__name__)

@app.route("/")
def home():
    return "<h1>This is a header</h1>"

@app.route("/<name>")       #name works as a parameter now
def user(name): 
    return f"Hello {name}"

@app.route("/admin")
def admin():
    return redirect(url_for("user", name = "Soham Bhai"))    # To redirect to a fucntion with parameter just use the parameter's name = ***
    
if __name__ == "__main__":
    app.run()