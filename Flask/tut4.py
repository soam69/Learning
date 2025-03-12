from flask import Flask,redirect,url_for, render_template, request

app = Flask(__name__)



@app.route("/login", methods = ["POST", "GET"])
def login():
    if request.method == "POST":
        var = request.form["nm"]
        return redirect(url_for("home", name = var))
    else:
        return render_template("login.html")

@app.route("/<name>")
def home(name):
    return render_template("tut4.html",content = name)

if __name__ == "__main__":
    app.run(debug=True)