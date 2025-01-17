/**
 * spoonacular API
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 1.1
 * Contact: mail@spoonacular.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner::OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner::OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner() {
    this->initializeModel();
}

OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner::~OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner() {}

void OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_steps_isSet = false;
    m_steps_isValid = false;
}

void OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_steps_isValid = ::OpenAPI::fromJsonValue(steps, json[QString("steps")]);
    m_steps_isSet = !json[QString("steps")].isNull() && m_steps_isValid;
}

QString OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (steps.size() > 0) {
        obj.insert(QString("steps"), ::OpenAPI::toJsonValue(steps));
    }
    return obj;
}

QString OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner::getName() const {
    return name;
}
void OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner::is_name_Set() const{
    return m_name_isSet;
}

bool OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner::is_name_Valid() const{
    return m_name_isValid;
}

QSet<OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner_steps_inner> OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner::getSteps() const {
    return steps;
}
void OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner::setSteps(const QSet<OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner_steps_inner> &steps) {
    this->steps = steps;
    this->m_steps_isSet = true;
}

bool OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner::is_steps_Set() const{
    return m_steps_isSet;
}

bool OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner::is_steps_Valid() const{
    return m_steps_isValid;
}

bool OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (steps.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAnalyzeRecipeInstructions_200_response_parsedInstructions_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && true;
}

} // namespace OpenAPI
